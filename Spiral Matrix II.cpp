/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Spiral Matrix II.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 12:25:07 by mdarify           #+#    #+#             */
/*   Updated: 2023/07/15 12:57:47 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Solution 
{
    void fillVector(vector<vector<int>> &Vsize, int &start, int &end, int &x, int &y, int &n)
    {
        for (;x < n && Vsize[y][x] == 0 && start <= end ;x++, start++)
            Vsize[y][x] = start;
        x--;
        y++;
        for (;y < n && Vsize[y][x] == 0 && start <= end ;y++, start++)
        {
            Vsize[y][x] = start;
        }
        y--;
        x--;
        for (;x >= 0 && Vsize[y][x] == 0 && start <= end ;x--, start++)
            Vsize[y][x] = start;
        x++;
        y--;
        for (;y > x - 1 && Vsize[y][x] == 0 && start <= end ;y--, start++)
            Vsize[y][x] = start;
        x++;
        y++;
    }
    public:
        vector<vector<int>> generateMatrix(int n) 
        {
            int start;
            int end;
            start = 1;
            end = n * n;
            int x = 0;
            int y = 0;
            std::vector<vector<int>> Vsize(n, std::vector(n, 0));
            while (start <= end)
                fillVector(Vsize, start, end, x, y, n);
            return Vsize;
        }
};